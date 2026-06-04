#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Common/ECI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_1_OFFSET UNITYSDK_OFFSET(0x1B53EE60)
#define ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_OFFSET UNITYSDK_OFFSET(0x1B53EC90)
#define ZXING_COMMON_CHARACTERSETECI_GETCHARACTERSETECIBYNAME_OFFSET UNITYSDK_OFFSET(0x1B53F110)
#define ZXING_COMMON_CHARACTERSETECI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B53E260)
#define ZXING_COMMON_CHARACTERSETECI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53F0F0)

namespace ZXing::Common
{
	inline static constexpr unsigned int CharacterSetECI_TypeDefinitionIndex = 6410;

	class CharacterSetECI : public ::ZXing::Common::ECI
	{
	public:
		static ::System::Collections::Generic::IDictionary_2<::System::Int32, ::ZXing::Common::CharacterSetECI*>** StaticGet_VALUE_TO_ECI()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Int32, ::ZXing::Common::CharacterSetECI*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterSetECI_TypeDefinitionIndex)->GetStaticField(0x32D0);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::String*, ::ZXing::Common::CharacterSetECI*>** StaticGet_NAME_TO_ECI()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::String*, ::ZXing::Common::CharacterSetECI*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterSetECI_TypeDefinitionIndex)->GetStaticField(0x32D8);
		}
		::System::String* encodingName; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void addCharacterSet(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_OFFSET))(a1, a2);
		}

		static ::System::Void addCharacterSet_1(::System::Int32 a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_1_OFFSET))(a1, a2);
		}

		static ::ZXing::Common::CharacterSetECI* getCharacterSetECIByName(::System::String* a1)
		{
			return ((::ZXing::Common::CharacterSetECI*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI_GETCHARACTERSETECIBYNAME_OFFSET))(a1);
		}
	};
}
