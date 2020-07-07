text = None
with open("moves.txt", "r") as f:
    text = f.read()

rawMoves = text.split('\n\n')

class move:
    def __init__(self, id):
        self.board = []
        self.moves = []
        self.mirror = None
        self.turn = None
        self.id = id

    def makeMirror(self, id):
        if self.mirror:
            tmpMove = move(id + 1)

            tmpMove.mirror = False
            tmpMove.turn = self.turn

            for i in range(3):
                tpmRow = [self.board[i][2], self.board[i][1], self.board[i][0]]
                tmpMove.board.append(tpmRow)

            for move_ in self.moves:
                tmpMoves = [None, move_[1], None, move_[3]]
                if move_[0] == 0:
                    tmpMoves[0] = 2
                elif move_[0] == 2:
                    tmpMoves[0] = 0
                else:
                    tmpMoves[0] = 1

                if move_[2] == 0:
                    tmpMoves[2] = 2
                elif move_[2] == 2:
                    tmpMoves[2] = 0
                else:
                    tmpMoves[2] = 1
                tmpMove.moves.append(tmpMoves)

            moves.append(tmpMove)
            return id + 1
        else:
            return id

    def __str__(self):
        string = ""
        string +=   "state option" + str(self.id) + " = {\n"\
                        + "\t.board = " + str(self.board).replace('[', '{').replace(']', '}').replace("'", '') + ",\n"\
                        + "\t.moves = {\n"

        for move in self.moves:
            string +=   "\t\t{\n"\
                            "\t\t\t.valid = 1,\n"\
                            "\t\t\t.startX = " + str(move[0]) + ",\n"\
                            "\t\t\t.startY = " + str(move[1]) + ",\n"\
                            "\t\t\t.endX = " + str(move[2]) + ",\n"\
                            "\t\t\t.endY = " + str(move[3]) + ",\n"\
                        "\t\t},\n"

        if 4 - len(self.moves) != 0:
            string += "\t\t{.valid=0},\n" * (4 - len(self.moves))
        string = string[:-2] + "\n\t}\n};"

        #string += "\nturn: " + str(self.turn)
        return string

def getCoords(moves):
    startX = startY = endX = endY = None
    for i in range(3):
        for j in range(3):
            if moves[i][j] == '1':
                startX = j
                startY = i
            elif moves[i][j] == '2':
                endX = j
                endY = i
    return [startX, startY, endX, endY]

moves = []
id = 0
for block in rawMoves:
    tmpMove = move(id)

    rows = block.split('\n')
    columns = []
    for row in rows:
        columns.append(row.split('\t'))

    if columns[0][len(columns[0]) - 2] == "mirror":
        tmpMove.mirror = True
    else:
        tmpMove.mirror = False

    tmpMove.turn = int(columns[0][len(columns[0]) - 1])

    tmpMove.board.append(columns[0][0].split(' '))
    tmpMove.board.append(columns[1][0].split(' '))
    tmpMove.board.append(columns[2][0].split(' '))

    for i in range(1, len(columns[1])):
        tmpMoves = []
        tmpMoves.append(columns[0][i].split(' '))
        tmpMoves.append(columns[1][i].split(' '))
        tmpMoves.append(columns[2][i].split(' '))
        tmpMove.moves.append(getCoords(tmpMoves))

    moves.append(tmpMove)
    id = tmpMove.makeMirror(id)
    id += 1


cFile = "#include \"ai.h\"\n\n"
for move in moves:
    cFile += str(move) + "\n\n"

with open("src/aiMoves.c", "w") as f:
    f.write(cFile[:-2])