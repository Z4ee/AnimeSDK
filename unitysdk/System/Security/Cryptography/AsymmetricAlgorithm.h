#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x164094C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x16409510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16409470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x16409670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x16409520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x16409530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x164096C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x16409460)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricAlgorithm_TypeDefinitionIndex = 991;

	class AsymmetricAlgorithm : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalKeySizesValue; // 0x10
		::System::Int32 KeySizeValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_SET_KEYSIZE_OFFSET))(this, value);
		}

		::System::Void FromXmlString(::System::String* xmlString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_FROMXMLSTRING_OFFSET))(this, xmlString);
		}

		::System::String* ToXmlString(::System::Boolean includePrivateParameters)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TOXMLSTRING_OFFSET))(this, includePrivateParameters);
		}
	};
}
