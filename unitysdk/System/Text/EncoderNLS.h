#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/Encoder.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODERNLS_CLEARMUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x185F4C70)
#define SYSTEM_TEXT_ENCODERNLS_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x185F4A70)
#define SYSTEM_TEXT_ENCODERNLS_CONVERT_OFFSET UNITYSDK_OFFSET(0x185F47B0)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x185F4390)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x185F4210)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x185F46B0)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x185F4480)
#define SYSTEM_TEXT_ENCODERNLS_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x185F4C40)
#define SYSTEM_TEXT_ENCODERNLS_GET_HASSTATE_OFFSET UNITYSDK_OFFSET(0x185F4C60)
#define SYSTEM_TEXT_ENCODERNLS_GET_MUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x185F4C50)
#define SYSTEM_TEXT_ENCODERNLS_RESET_OFFSET UNITYSDK_OFFSET(0x185F41F0)
#define SYSTEM_TEXT_ENCODERNLS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x185F3FF0)
#define SYSTEM_TEXT_ENCODERNLS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185F41A0)
#define SYSTEM_TEXT_ENCODERNLS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185F41D0)
#define SYSTEM_TEXT_ENCODERNLS__CTOR_OFFSET UNITYSDK_OFFSET(0x185F3F70)

namespace System::Text
{
	inline static constexpr unsigned int EncoderNLS_TypeDefinitionIndex = 483;

	class EncoderNLS : public ::System::Text::Encoder
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Char charLeftOver; // 0x28
		::System::Boolean m_mustFlush; // 0x2A
		::System::Boolean m_throwOnOverflow; // 0x2B
		::System::Int32 m_charsUsed; // 0x2C

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Text::Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS__CTOR_2_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_RESET_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetByteCount_1(::System::Char* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetBytes_1(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Convert(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32& a8, ::System::Int32& a9, ::System::Boolean& a10)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_CONVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void Convert_1(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32& a6, ::System::Int32& a7, ::System::Boolean& a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_CONVERT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GET_ENCODING_OFFSET))(this);
		}

		::System::Boolean get_MustFlush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GET_MUSTFLUSH_OFFSET))(this);
		}

		::System::Boolean get_HasState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GET_HASSTATE_OFFSET))(this);
		}

		::System::Void ClearMustFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_CLEARMUSTFLUSH_OFFSET))(this);
		}
	};
}
