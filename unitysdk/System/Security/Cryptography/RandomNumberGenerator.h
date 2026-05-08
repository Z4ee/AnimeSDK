#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1A5AE260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5AE360)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5AE2B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A5AE370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET UNITYSDK_OFFSET(0x1A5AE4E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5AE250)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RandomNumberGenerator_TypeDefinitionIndex = 1078;

	class RandomNumberGenerator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* Create()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void GetBytes(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET))(this, data, offset, count);
		}

		::System::Void GetNonZeroBytes(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET))(this, data);
		}
	};
}
