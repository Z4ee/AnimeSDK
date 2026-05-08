#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DeriveBytes.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HMACSHA1; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A98AFF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_FUNC_OFFSET UNITYSDK_OFFSET(0x1A98AB20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A98A9B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A98A940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A98A860)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x1A98A670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A98A590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A98A4E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Rfc2898DeriveBytes_TypeDefinitionIndex = 1081;

	class Rfc2898DeriveBytes : public ::System::Security::Cryptography::DeriveBytes
	{
	public:
		::Il2CppArray<::System::Byte>* m_salt; // 0x10
		::Il2CppArray<::System::Byte>* m_password; // 0x18
		::System::Security::Cryptography::HMACSHA1* m_hmacsha1; // 0x20
		::Il2CppArray<::System::Byte>* m_buffer; // 0x28
		::System::Int32 m_endIndex; // 0x30
		::System::UInt32 m_iterations; // 0x34
		::System::UInt32 m_block; // 0x38
		::System::Int32 m_startIndex; // 0x3C

		::System::Void _ctor(::System::String* password, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterations)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES__CTOR_OFFSET))(this, password, salt, iterations);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* password, ::Il2CppArray<::System::Byte>* salt, ::System::Int32 iterations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES__CTOR_1_OFFSET))(this, password, salt, iterations);
		}

		::System::Void set_IterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(this, value);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_SALT_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes(::System::Int32 cb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GETBYTES_OFFSET))(this, cb);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_DISPOSE_OFFSET))(this, disposing);
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
