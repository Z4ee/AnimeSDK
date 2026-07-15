#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_State_TypeDefinitionIndex = 1865;

	enum class XmlWellFormedWriter_State : ::System::Int32
	{
		Start = 0,
		TopLevel = 1,
		Document = 2,
		Element = 3,
		Content = 4,
		B64Content = 5,
		B64Attribute = 6,
		AfterRootEle = 7,
		Attribute = 8,
		SpecialAttr = 9,
		EndDocument = 10,
		RootLevelAttr = 11,
		RootLevelSpecAttr = 12,
		RootLevelB64Attr = 13,
		AfterRootLevelAttr = 14,
		Closed = 15,
		Error = 16,
		StartContent = 101,
		StartContentEle = 102,
		StartContentB64 = 103,
		StartDoc = 104,
		StartDocEle = 106,
		EndAttrSEle = 107,
		EndAttrEEle = 108,
		EndAttrSCont = 109,
		EndAttrSAttr = 111,
		PostB64Cont = 112,
		PostB64Attr = 113,
		PostB64RootAttr = 114,
		StartFragEle = 115,
		StartFragCont = 116,
		StartFragB64 = 117,
		StartRootLevelAttr = 118,
	};
}
