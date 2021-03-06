#ifndef TOOL_H
#define TOOL_H
class Tool
{
private:
	int strength;
	char type;
public:
	Tool(int, char);
	void SetStrength(int x);
	//VIRUAL FIGHT FUNCTION ALLOWS CORRECT TOOL TO BE ACCESSED BY TOOL* IN RPS GAME CLASS
	virtual double fight(char) = 0;
	//VIRTUAL DESTRUCTOR
	virtual ~Tool();
};
#endif
