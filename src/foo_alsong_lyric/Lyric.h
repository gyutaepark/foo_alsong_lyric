#pragma once

#include "pugixml/pugixml.hpp"
#include <string>

struct LyricLine
{
	LyricLine(DWORD _time, const std::string &_lyric) : time(_time), lyric(_lyric) {}
	LyricLine() : time(0), lyric("") {}
	DWORD time;
	std::string lyric;

	int operator ==(const LyricLine &line) const
	{
		return (lyric == line.lyric) && (time == line.time);
	}
};

class Lyric
{
protected:
	std::string m_Title;
	std::string m_Album;
	std::string m_Artist;
	std::string m_Registrant;
	std::string m_Lyric;
	
	std::vector<LyricLine> m_LyricLines;
	std::vector<LyricLine>::iterator m_LyricIterator;

	DWORD Split(const char *Delimiter);
public:
	Lyric();
	Lyric(const char *raw);
	~Lyric();

	void Clear();
	
	std::vector<LyricLine>::const_iterator GetIteratorAt(unsigned int time) const; //returns lyric right after time.
	
	std::string GetRawLyric() const
	{
		return m_Lyric;
	}

	std::string GetTitle() const
	{
		return m_Title;
	}

	std::string GetAlbum() const
	{
		return m_Album;
	}

	std::string GetArtist() const
	{
		return m_Artist;
	}

	std::string GetRegistrant() const
	{
		return m_Registrant;
	}

	int IsEndOfLyric(std::vector<LyricLine>::const_iterator it) const
	{
		return it == m_LyricLines.end();
	}

	int IsBeginOfLyric(std::vector<LyricLine>::const_iterator it) const
	{
		return it == m_LyricLines.begin();
	}

	int HasLyric() const
	{
		return m_LyricLines.size() != 0;
	}

	int IsValidIterator(std::vector<LyricLine>::const_iterator) const;

	virtual int GetInternalID() const = 0;
};
