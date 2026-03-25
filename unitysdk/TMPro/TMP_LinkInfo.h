#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_LINKINFO_GETLINKID_OFFSET UNITYSDK_OFFSET(0x210BE70)
#define TMPRO_TMP_LINKINFO_GETLINKTEXT_OFFSET UNITYSDK_OFFSET(0x210BE60)
#define TMPRO_TMP_LINKINFO_SETLINKID_OFFSET UNITYSDK_OFFSET(0x210BE50)

namespace TMPro
{
	inline static constexpr unsigned int TMP_LinkInfo_TypeDefinitionIndex = 34419;

	struct alignas(8) TMP_LinkInfo
	{
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 hashCode; // 0x18
		::System::Int32 linkIdFirstCharacterIndex; // 0x1C
		::System::Int32 linkIdLength; // 0x20
		::System::Int32 linkTextfirstCharacterIndex; // 0x24
		::System::Int32 linkTextLength; // 0x28
		::Il2CppArray<::System::Char>* linkID; // 0x30

		::System::Void SetLinkID(::Il2CppArray<::System::Char>* text, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_LINKINFO_SETLINKID_OFFSET))(this, text, startIndex, length);
		}

		::System::String* GetLinkText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LINKINFO_GETLINKTEXT_OFFSET))(this);
		}

		::System::String* GetLinkID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LINKINFO_GETLINKID_OFFSET))(this);
		}
	};
}
