#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DeriveBytes.h"

namespace System::Security::Cryptography { class HMACSHA1; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166BC300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_FUNC_OFFSET UNITYSDK_OFFSET(0x166BBEF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GETBYTES_OFFSET UNITYSDK_OFFSET(0x166BBDA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166BBD50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x166BBCC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x166BBB30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES__CTOR_OFFSET UNITYSDK_OFFSET(0x166BB9E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Rfc2898DeriveBytes_TypeDefinitionIndex = 1041;

	class Rfc2898DeriveBytes : public ::System::Security::Cryptography::DeriveBytes
	{
	public:
		::Il2CppArray<::System::Byte>* m_password; // 0x10
		::Il2CppArray<::System::Byte>* m_buffer; // 0x18
		::System::Security::Cryptography::HMACSHA1* m_hmacsha1; // 0x20
		::Il2CppArray<::System::Byte>* m_salt; // 0x28
		::System::Int32 m_startIndex; // 0x30
		::System::UInt32 m_iterations; // 0x34
		::System::Int32 m_endIndex; // 0x38
		::System::UInt32 m_block; // 0x3C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void set_IterationCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_SALT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetBytes(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GETBYTES_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_INITIALIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Func()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_FUNC_OFFSET))(this);
		}
	};
}
