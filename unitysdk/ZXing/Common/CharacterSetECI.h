#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Common/ECI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_1_OFFSET UNITYSDK_OFFSET(0x1BE70C30)
#define ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_OFFSET UNITYSDK_OFFSET(0x1BE70A60)
#define ZXING_COMMON_CHARACTERSETECI_GETCHARACTERSETECIBYNAME_OFFSET UNITYSDK_OFFSET(0x1BE70F00)
#define ZXING_COMMON_CHARACTERSETECI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE6FCE0)
#define ZXING_COMMON_CHARACTERSETECI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE70EE0)

namespace ZXing::Common
{
	inline static constexpr unsigned int CharacterSetECI_TypeDefinitionIndex = 19445;

	class CharacterSetECI : public ::ZXing::Common::ECI
	{
	public:
		static ::System::Collections::Generic::IDictionary_2<::System::String*, ::ZXing::Common::CharacterSetECI*>** StaticGet_NAME_TO_ECI()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::String*, ::ZXing::Common::CharacterSetECI*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterSetECI_TypeDefinitionIndex)->GetStaticField(0x8BA0);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Int32, ::ZXing::Common::CharacterSetECI*>** StaticGet_VALUE_TO_ECI()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Int32, ::ZXing::Common::CharacterSetECI*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterSetECI_TypeDefinitionIndex)->GetStaticField(0x8BA8);
		}
		::System::String* encodingName; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 value, ::System::String* encodingName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI__CTOR_OFFSET))(this, value, encodingName);
		}

		static ::System::Void addCharacterSet(::System::Int32 value, ::System::String* encodingName)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_OFFSET))(value, encodingName);
		}

		static ::System::Void addCharacterSet_1(::System::Int32 value, ::Il2CppArray<::System::String*>* encodingNames)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI_ADDCHARACTERSET_1_OFFSET))(value, encodingNames);
		}

		static ::ZXing::Common::CharacterSetECI* getCharacterSetECIByName(::System::String* name)
		{
			return ((::ZXing::Common::CharacterSetECI*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_CHARACTERSETECI_GETCHARACTERSETECIBYNAME_OFFSET))(name);
		}
	};
}
