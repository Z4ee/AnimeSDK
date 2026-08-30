#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TMPRO_TMP_SETTINGS_LINEBREAKINGTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5D970)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Settings_LineBreakingTable_TypeDefinitionIndex = 43438;

	class TMP_Settings_LineBreakingTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Char>* leadingCharacters; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Char>* followingCharacters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_LINEBREAKINGTABLE__CTOR_OFFSET))(this);
		}
	};
}
