#ifndef __RTLSupport__
#define __RTLSupport__

#include <string>
#include <vector>
#include <unordered_map>
#include <codecvt>
#include <locale>

using namespace std;


enum class HinduNumbers
{
    Zero = 0x0660,
    One = 0x0661,
    Two = 0x0662,
    Three = 0x0663,
    Four = 0x0664,
    Five = 0x0665,
    Six = 0x0666,
    Seven = 0x0667,
    Eight = 0x0668,
    Nine = 0x0669
};
enum class EnglishNumbers
{
    Zero = 0x0030,
    One = 0x0031,
    Two = 0x0032,
    Three = 0x0033,
    Four = 0x0034,
    Five = 0x0035,
    Six = 0x0036,
    Seven = 0x0037,
    Eight = 0x0038,
    Nine = 0x0039
};

enum class FarsiNumbers
{
    Zero = 0x6F0,
    One = 0x6F1,
    Two = 0x6F2,
    Three = 0x6F3,
    Four = 0x6F4,
    Five = 0x6F5,
    Six = 0x6F6,
    Seven = 0x6F7,
    Eight = 0x6F8,
    Nine = 0x6F9
};

enum class ArabicGeneralLetters
{
    Hamza = 0x0621,
    Alef = 0x0627,
    AlefHamza = 0x0623,
    WawHamza = 0x0624,
    AlefMaksoor = 0x0625,
    AlefMaksura = 0x649,
    HamzaNabera = 0x0626,
    Ba = 0x0628,
    Ta = 0x062A,
    Tha2 = 0x062B,
    Jeem = 0x062C,
    H7aa = 0x062D,
    Khaa2 = 0x062E,
    Dal = 0x062F,
    Thal = 0x0630,
    Ra2 = 0x0631,
    Zeen = 0x0632,
    Seen = 0x0633,
    Sheen = 0x0634,
    S9a = 0x0635,
    Dha = 0x0636,
    T6a = 0x0637,
    T6ha = 0x0638,
    Ain = 0x0639,
    Gain = 0x063A,
    Fa = 0x0641,
    Gaf = 0x0642,
    Kaf = 0x0643,
    Lam = 0x0644,
    Meem = 0x0645,
    Noon = 0x0646,
    Ha = 0x0647,
    Waw = 0x0648,
    Ya = 0x064A,
    AlefMad = 0x0622,
    TaMarboota = 0x0629,
    PersianYa = 0x6CC,
    PersianPe = 0x067E,
    PersianChe = 0x0686,
    PersianZe = 0x0698,
    PersianGaf = 0x06AF,
    PersianGaf2 = 0x06A9,
    ArabicTatweel = 0x640,
    ZeroWidthNoJoiner = 0x200C
};

enum class ArabicIsolatedLetters
{
    Hamza = 0xFE80,
    Alef = 0xFE8D,
    AlefHamza = 0xFE83,
    WawHamza = 0xFE85,
    AlefMaksoor = 0xFE87,
    AlefMaksura = 0xFEEF,
    HamzaNabera = 0xFE89,
    Ba = 0xFE8F,
    Ta = 0xFE95,
    Tha2 = 0xFE99,
    Jeem = 0xFE9D,
    H7aa = 0xFEA1,
    Khaa2 = 0xFEA5,
    Dal = 0xFEA9,
    Thal = 0xFEAB,
    Ra2 = 0xFEAD,
    Zeen = 0xFEAF,
    Seen = 0xFEB1,
    Sheen = 0xFEB5,
    S9a = 0xFEB9,
    Dha = 0xFEBD,
    T6a = 0xFEC1,
    T6ha = 0xFEC5,
    Ain = 0xFEC9,
    Gain = 0xFECD,
    Fa = 0xFED1,
    Gaf = 0xFED5,
    Kaf = 0xFED9,
    Lam = 0xFEDD,
    Meem = 0xFEE1,
    Noon = 0xFEE5,
    Ha = 0xFEE9,
    Waw = 0xFEED,
    Ya = 0xFEF1,
    AlefMad = 0xFE81,
    TaMarboota = 0xFE93,
    PersianYa = 0xFBFC,
    PersianPe = 0xFB56,
    PersianChe = 0xFB7A,
    PersianZe = 0xFB8A,
    PersianGaf = 0xFB92,
    PersianGaf2 = 0xFB8E
};

enum class TashkeelCharacters
{
    Fathan = 0x064B,
    Dammatan = 0x064C,
    Kasratan = 0x064D,
    Fatha = 0x064E,
    Damma = 0x064F,
    Kasra = 0x0650,
    Shadda = 0x0651,
    Sukun = 0x0652,
    MaddahAbove = 0x0653,
    SuperscriptAlef = 0x670,
    ShaddaWithDammatanIsolatedForm = 0xFC5E,
    ShaddaWithKasratanIsolatedForm = 0xFC5F,
    ShaddaWithFathaIsolatedForm = 0xFC60,
    ShaddaWithDammaIsolatedForm = 0xFC61,
    ShaddaWithKasraIsolatedForm = 0xFC62,
    ShaddaWithSuperscriptAlefIsolatedForm = 0xFC63
};

enum class LetterRange
{
	LowerCaseA = 0x61,
	UpperCaseA = 0x41,
	LowerCaseZ = 0x7A,
	UpperCaseZ = 0x5A,
	HebrewLow  = 0x591,
	HebrewHigh = 0x5F4,
	ArabicBaseBlockLow  = 0x600,
	ArabicBaseBlockHigh = 0x6FF,
	ArabicExtendedABlockLow  = 0x8A0,
	ArabicExtendedABlockHigh = 0x8FF,
	ArabicExtendedBBlockLow  = 0x870,
	ArabicExtendedBBlockHigh = 0x89F,
	ArabicPresentationFormsABlockLow  = 0xFB50,
	ArabicPresentationFormsABlockHigh = 0xFDFF,
	ArabicPresentationFormsBBlockLow  = 0xFE70,
	ArabicPresentationFormsBBlockHigh = 0xFEFF,
};

class FastStringBuilder;
struct TashkeelLocation;


class RTLSupport
{
private:
	RTLSupport();
	~RTLSupport();

public:
    static RTLSupport& getInstance();
    string FixRTL(const string &input,bool farsi = true,bool fixTextTags = true,bool preserveNumbers = false);
	bool IsUnicode16Char(int ch);
	bool IsRTLCharacter(int ch);
	bool IsEnglishLetter(int ch);
	bool IsNumber(int ch, bool preserveNumbers, bool farsi);
	bool IsSymbol(int ch);
	bool IsLetter(int ch);
	bool IsPunctuation(int ch);
	bool IsWhiteSpace(int ch);
    char32_t Convert(char32_t toBeConverted);
    void initMapList();
    int GetTashkeelConvert(char32_t toBeConverted);
    void RemoveTashkeel(FastStringBuilder &input);
    void RestoreTashkeel(FastStringBuilder &letters);
    void FixShaddaCombinations(FastStringBuilder &input);
    void GlyphFix(FastStringBuilder &input, FastStringBuilder &output, bool preserveNumbers, bool farsi, bool fixTextTags);
    void FixYah(FastStringBuilder &text, bool farsi);
    bool HandleSpecialLam(FastStringBuilder &input, FastStringBuilder &output, int i);
    void FixNumbers(FastStringBuilder &text, bool farsi);
    void FixNumbersOutsideOfTags(FastStringBuilder &text, bool farsi);
    bool IsLeadingLetter(FastStringBuilder &letters, int index);
    bool IsFinishingLetter(FastStringBuilder &letters, int index);
    bool IsMiddleLetter(FastStringBuilder &letters, int index);
    void FlushBufferToOutput(vector<int> buffer, FastStringBuilder &output);
    void LigatureFix(FastStringBuilder &input, FastStringBuilder &output, bool farsi, bool fixTextTags, bool preserveNumbers);
private:
    unordered_map<char32_t,char32_t> TashkeelCharactersMap;
	unordered_map<char32_t,char32_t> MapList;
    unordered_map<char32_t,char32_t> EnglishToFarsiNumberMap;
    unordered_map<char32_t,char32_t> EnglishToHinduNumberMap;
    unordered_map<char32_t,char32_t> MirroredCharsMap;
    vector<int> LtrTextHolder;
    vector<int> TagTextHolder;
    vector<TashkeelLocation> TashkeelLocations;
    FastStringBuilder *inputBuilder;
    FastStringBuilder *glyphFixerOutput;
};


#endif /* defined(__RTLSupport__) */
