#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UITEXTSELECTION_UITEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19E38D70)

inline static constexpr unsigned int UITextSelection_UITextInfo_TypeDefinitionIndex = 45230;

class UITextSelection_UITextInfo : public ::System::Object
{
public:
	::System::String* rawText; // 0x10
	::System::String* changeText; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTSELECTION_UITEXTINFO__CTOR_OFFSET))(this);
	}
};
