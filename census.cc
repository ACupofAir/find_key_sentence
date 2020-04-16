//Author:Hehaixin
#include<stdio.h>
#include<string.h>
//#include<iostream>
using namespace std;
QString find_key_sentence(QString test_input)
{
	int i, j, m, a, stopnum, judge1, judge2, judge3, judge4, wordsnum, sentencenum, sentenceplace, coresentencenum;
	string words[1000];
	string finalwords[1000];
	string usefulwords[1000];
	int recording[1000];
	int sentence[1000];
	string highfrequency[5];
	string keys[160] = { "you", "i", "he", "she", "me", "him", "her", "it",
				"they", "them", "we", "us", "your", "yours", "our", "his",
				"her", "its", "my", "in", "into", "on", "for", "out", "up",
				"down", "at", "to", "too", "with", "by", "about", "among",
				"between", "over", "from", "be", "been", "am", "is", "are",
				"was", "were", "without", "the", "of", "and", "a", "an",
				"that", "this", "be", "or", "as", "will", "would", "can",
				"could", "may", "might", "shall", "should", "must", "has",
				"have", "had", "than","You", "I", "He", "She", "Me", "Him", "Her", "It",
				"They", "Them", "We", "Us", "Your", "Yours", "Our", "His",
				"Her", "Its", "My", "In", "Into", "On", "For", "Out", "Up",
				"Down", "At", "To", "Too", "With", "By", "About", "Among",
				"Between", "Over", "From", "Be", "Been", "Am", "Is", "Are",
				"Was", "Were", "Without", "The", "Of", "And", "A", "An",
				"That", "This", "Be", "Or", "As", "Will", "Would", "Can",
				"Could", "May", "Might", "Shall", "Should", "Must", "Has",
				"Have", "Had", "Than" };
	stopnum = 0, judge1 = 0, judge2 = 0, judge3 = 0, judge4 = 1, wordsnum = 0, sentencenum = 0, sentenceplace = 0, coresentencenum = 1;
	 a = 0;
	char passage[1000] = test_input;

//	f.open("input.txt");
//	f.getline(passage,1000);

	// cout << "请输入文章:\n";
	// cin.getline(passage, 1000);

	// cout<<"test";
	// cout<<passage;

	int stopplace[500];
	for (i = 0; i < 1000;)
	{
		recording[i] = 0;
		i++;
	}
	for (i = 0; i < 1000;)
	{
		finalwords[i] = " ";
		i++;
	}
	for (i = 0; i < 500;)
	{
		stopplace[i] = 0;
		i++;
	}
	for (i = 0; i < 1000; i++)
	{
		if (passage[i] == '.' || passage[i] == '?' || passage[i] == '!')
		{
			stopplace[stopnum] = i;
			stopnum++;
		}
	}
	//确定各句终止位置
	for (i = 0; i < 500; i++)
	{
		if (stopplace[i] != 0)
//			cout << "句号位置:" << stopplace[i] << " ";
		if (stopplace[i] == 0)
			break;
	}
	for (int i = 0; i < 1000; i++)
	{
		words[i] = passage[i];
	}
	for (int i = 0; i < 999; i++)
	{
		if (i != 0)
		{
			if (words[i] == " ")
			{
				judge1 = 1;
				if (words[i + 1] != " ")
					judge2 = 1;
			}
			if (judge1 == 1 && judge2 == 1)
			{
				for (j = i + 2; j < 1000; j++)
				{
					if (words[j] == " " || words[j] == ".")
					{
						judge3 = j;
						break;
					}
				}
				for (m = i + 1; m < judge3; m++)
				{
					if (m == i + 1)
						finalwords[wordsnum] = words[m];
					else
						finalwords[wordsnum] += words[m];
				}
				judge1 = 0, judge2 = 0;
				wordsnum++;
			}
			if (words[i] == ".")
			{
				finalwords[wordsnum] = words[i];
				wordsnum++;
			}

		}
		if (i == 0)
		{
			for (m = i; m < 1000; m++)
			{
				if (words[m] != " ")
				{
					judge1 = m;
					for (; m < 1000; m++)
					{
						if (words[m] == " ")
						{
							judge2 = m;
							break;
						}
					}
					break;
				}
			}
			for (m = judge1; m < judge2; m++)
			{
				if (m == judge1)
					finalwords[wordsnum] = words[m];
				else
					finalwords[wordsnum] += words[m];
			}
			judge1 = 0, judge2 = 0;
			wordsnum++;
		}

	}//此循环将单词储存于finalwords数组中
	m = 0;
	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 160; j++)
		{
			if (finalwords[i] == keys[j] || finalwords[i] == ".")
			{
				judge4 = 0;
				break;
			}
			if (keys[j] == " ")
				break;
		}
		if (judge4 == 1)
		{
			usefulwords[m] = finalwords[i];
			m++;
		}
		judge4 = 1;
	}
	for (i = 0; i < 1000; i++)
	{
		if (usefulwords[i] != " ")
		{
			for (j = i; j < 1000; j++)
			{
				if (finalwords[j] == usefulwords[i])
					recording[i]++;
			}
		}
		else
			break;
	}
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 1000; i++)
		{
			if (recording[i] > m)
			{
				m = recording[i];
				a = i;
			}
			if (i == 0)
				m = recording[0];
		}
		highfrequency[j] = usefulwords[a];
		recording[a] = 0;
	}
	a = 0;
	for (i = 0; i < stopplace[stopnum - 1] + 2; i++)
	{
		if (finalwords[i] == "." || finalwords[i] == "?" || finalwords[i] == "!")
			sentencenum++;
	}
	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (finalwords[i] == highfrequency[j])
			{
				a++;
			}
		}
		if (finalwords[i] == "." || finalwords[i] == "?" || finalwords[i] == "!")
		{
			sentence[sentenceplace] = a;
			sentenceplace++;
		}
		if (finalwords[i]==" ")
			break;
	}
	for (i = 0; i < 1000; i++)
	{
		if (i==0)
		{
			a = sentence[0];
		}
		if (sentence[i]>a)
		{
			a = sentence[i];
			coresentencenum++;
		}
	}
	a = 0, sentenceplace = 1;
	QString key_sentence;
	if (coresentencenum==1)
	{
//cout << "该文章核心句为：";
		for (i = 0; i < 1000; i++)
		{
			key_sentence << finalwords[i] << " ";
			if (finalwords[i] == "." || finalwords[i] == "?" || finalwords[i] == "!")
				break;
		}
	}
	else
	{
//		cout << "该文章核心句为：";
		for (i = 0; i < 1000; i++)
		{
			if (finalwords[i] == "." || finalwords[i] == "?" || finalwords[i] == "!")
				sentenceplace++;
			if (sentenceplace > coresentencenum)
			{
				break;
				key_sentence << finalwords[i];
			}
			if (coresentencenum==sentenceplace)
				key_sentence << finalwords[i+1] << " ";
		}
	}
}
