ADT NaturalNumber
object :
0�������� ��ǻ���� �ִ�����(MAXINT)������ ���� ������ ������ �ִ� ����
public:
	for all x, y �� NaturalNumber, True, False �� Boolean
		Zero(); // NaturalNumber ::= 0
	IsZero(x); // if (x == 0) IsZero = True
	// else IsZero = False
	Add(x, y); // if (x+y <= MAXINT) Add = x + y
	// else Add = MAXINT
	Subtract(x, y); // if (x < y) Subtract = 0
	// else Subtract = x - y
	Equal(x, y); // if (x == y) Equal = True
	// else Equal = False
	Successor(x); // if (x == MAXINT) Successor = MAXINT
	// else Successor = x + 1
	END NaturalNumber