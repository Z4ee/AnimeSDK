#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_Token_TypeDefinitionIndex = 1925;

	enum class DtdParser_Token : ::System::Int32
	{
		CDATA = 0,
		ID = 1,
		IDREF = 2,
		IDREFS = 3,
		ENTITY = 4,
		ENTITIES = 5,
		NMTOKEN = 6,
		NMTOKENS = 7,
		NOTATION = 8,
		None = 9,
		PERef = 10,
		AttlistDecl = 11,
		ElementDecl = 12,
		EntityDecl = 13,
		NotationDecl = 14,
		Comment = 15,
		PI = 16,
		CondSectionStart = 17,
		CondSectionEnd = 18,
		Eof = 19,
		REQUIRED = 20,
		IMPLIED = 21,
		FIXED = 22,
		QName = 23,
		Name = 24,
		Nmtoken = 25,
		Quote = 26,
		LeftParen = 27,
		RightParen = 28,
		GreaterThan = 29,
		Or = 30,
		LeftBracket = 31,
		RightBracket = 32,
		PUBLIC = 33,
		SYSTEM = 34,
		Literal = 35,
		DOCTYPE = 36,
		NData = 37,
		Percent = 38,
		Star = 39,
		QMark = 40,
		Plus = 41,
		PCDATA = 42,
		Comma = 43,
		ANY = 44,
		EMPTY = 45,
		IGNORE = 46,
		INCLUDE = 47,
	};
}
