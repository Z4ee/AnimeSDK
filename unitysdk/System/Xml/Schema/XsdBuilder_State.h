#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdBuilder_State_TypeDefinitionIndex = 2220;

	enum class XsdBuilder_State : ::System::Int32
	{
		Root = 0,
		Schema = 1,
		Annotation = 2,
		Include = 3,
		Import = 4,
		Element = 5,
		Attribute = 6,
		AttributeGroup = 7,
		AttributeGroupRef = 8,
		AnyAttribute = 9,
		Group = 10,
		GroupRef = 11,
		All = 12,
		Choice = 13,
		Sequence = 14,
		Any = 15,
		Notation = 16,
		SimpleType = 17,
		ComplexType = 18,
		ComplexContent = 19,
		ComplexContentRestriction = 20,
		ComplexContentExtension = 21,
		SimpleContent = 22,
		SimpleContentExtension = 23,
		SimpleContentRestriction = 24,
		SimpleTypeUnion = 25,
		SimpleTypeList = 26,
		SimpleTypeRestriction = 27,
		Unique = 28,
		Key = 29,
		KeyRef = 30,
		Selector = 31,
		Field = 32,
		MinExclusive = 33,
		MinInclusive = 34,
		MaxExclusive = 35,
		MaxInclusive = 36,
		TotalDigits = 37,
		FractionDigits = 38,
		Length = 39,
		MinLength = 40,
		MaxLength = 41,
		Enumeration = 42,
		Pattern = 43,
		WhiteSpace = 44,
		AppInfo = 45,
		Documentation = 46,
		Redefine = 47,
	};
}
