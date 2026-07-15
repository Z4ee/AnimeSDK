#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_ScanningFunction_TypeDefinitionIndex = 1926;

	enum class DtdParser_ScanningFunction : ::System::Int32
	{
		SubsetContent = 0,
		Name = 1,
		QName = 2,
		Nmtoken = 3,
		Doctype1 = 4,
		Doctype2 = 5,
		Element1 = 6,
		Element2 = 7,
		Element3 = 8,
		Element4 = 9,
		Element5 = 10,
		Element6 = 11,
		Element7 = 12,
		Attlist1 = 13,
		Attlist2 = 14,
		Attlist3 = 15,
		Attlist4 = 16,
		Attlist5 = 17,
		Attlist6 = 18,
		Attlist7 = 19,
		Entity1 = 20,
		Entity2 = 21,
		Entity3 = 22,
		Notation1 = 23,
		CondSection1 = 24,
		CondSection2 = 25,
		CondSection3 = 26,
		Literal = 27,
		SystemId = 28,
		PublicId1 = 29,
		PublicId2 = 30,
		ClosingTag = 31,
		ParamEntitySpace = 32,
		None = 33,
	};
}
