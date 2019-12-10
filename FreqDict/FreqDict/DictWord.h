#pragma once
using namespace System;

ref class DictWord: IComparable
{
public:
	DictWord(String^ _word);
	DictWord(String^ _word, int _freq);
	int getFreq();
	void incFreq();
	String^ getWord();
	virtual String^ ToString() override sealed;
	int CompareTo(Object^ obj) override;

private:
	int freq;
	String^ word;
};

