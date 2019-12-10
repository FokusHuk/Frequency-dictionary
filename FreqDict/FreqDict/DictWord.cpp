#include "DictWord.h"

DictWord::DictWord(String^ _word)
{
	word = _word;
	freq = 1;
}

DictWord::DictWord(String^ _word, int _freq)
{
	word = _word;
	freq = _freq;
}

int DictWord::getFreq()
{
	return freq;
}

void DictWord::incFreq()
{
	freq++;
}

String^ DictWord::getWord()
{
	return word;
}

String^ DictWord::ToString()
{
	return String::Format("{0,-20}\t{1,5}", word, freq);
}

int DictWord::CompareTo(Object^ obj)
{
	if (String::Compare(this->word, ((DictWord^)obj)->word) <= 0)
		return 0;
	else
		return 1;
}
