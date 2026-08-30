#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x19BC1050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x19BBF160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x19BC0C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x19BC0910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x19BC0890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x19BC1060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BBFF10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x19BC1040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x19BC0700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASH_OFFSET UNITYSDK_OFFSET(0x19BC0710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x19BC1020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x19BC1030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x19BBF850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x19BBFBD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC06F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HashAlgorithm_TypeDefinitionIndex = 1023;

	class HashAlgorithm : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* HashValue; // 0x10
		::System::Boolean m_bDisposed; // 0x18
		::System::Int32 State; // 0x1C
		::System::Int32 HashSizeValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_HashSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASHSIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Hash()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASH_OFFSET))(this);
		}

		static ::System::Security::Cryptography::HashAlgorithm* Create(::System::String* a1)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET))(a1);
		}

		::Il2CppArray<::System::Byte>* ComputeHash(::System::IO::Stream* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* ComputeHash_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* ComputeHash_2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMBLOCK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMFINALBLOCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_1_OFFSET))(this, a1);
		}
	};
}
