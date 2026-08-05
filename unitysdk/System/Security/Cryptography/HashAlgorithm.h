#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C6E6F30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x1C6B9900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x1C6E6810)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1C6E6640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C6E65C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C6E6FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6E6E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1C6E6AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x1C6E6440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1C6E6450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1C6E6A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1C6E6A90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1C6E6AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1C6E6C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E6430)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HashAlgorithm_TypeDefinitionIndex = 1062;

	class HashAlgorithm : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* HashValue; // 0x10
		::System::Int32 HashSizeValue; // 0x18
		::System::Boolean m_bDisposed; // 0x1C
		::System::Int32 State; // 0x20

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

		static ::System::Security::Cryptography::HashAlgorithm* Create(::System::String* hashName)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CREATE_OFFSET))(hashName);
		}

		::Il2CppArray<::System::Byte>* ComputeHash(::System::IO::Stream* inputStream)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_OFFSET))(this, inputStream);
		}

		::Il2CppArray<::System::Byte>* ComputeHash_1(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_1_OFFSET))(this, buffer);
		}

		::Il2CppArray<::System::Byte>* ComputeHash_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_COMPUTEHASH_2_OFFSET))(this, buffer, offset, count);
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

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHM_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
