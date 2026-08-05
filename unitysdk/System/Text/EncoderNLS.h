#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/Encoder.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text { class Encoding; }

#define SYSTEM_TEXT_ENCODERNLS_CLEARMUSTFLUSH_OFFSET UNITYSDK_OFFSET(0x1D697640)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1D6971C0)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1D697050)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1D697500)
#define SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1D6972B0)
#define SYSTEM_TEXT_ENCODERNLS_RESET_OFFSET UNITYSDK_OFFSET(0x1D697030)
#define SYSTEM_TEXT_ENCODERNLS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D696EA0)
#define SYSTEM_TEXT_ENCODERNLS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D696FE0)
#define SYSTEM_TEXT_ENCODERNLS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D697010)
#define SYSTEM_TEXT_ENCODERNLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D696E20)

namespace System::Text
{
	inline static constexpr unsigned int EncoderNLS_TypeDefinitionIndex = 470;

	class EncoderNLS : public ::System::Text::Encoder
	{
	public:
		::System::Text::Encoding* m_encoding; // 0x20
		::System::Boolean m_mustFlush; // 0x28
		::System::Boolean m_throwOnOverflow; // 0x29
		::System::Char charLeftOver; // 0x2A
		::System::Int32 m_charsUsed; // 0x2C

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1(::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS__CTOR_1_OFFSET))(this, encoding);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS__CTOR_2_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_RESET_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_OFFSET))(this, chars, index, count, flush);
		}

		::System::Int32 GetByteCount_1(::System::Char* chars, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTECOUNT_1_OFFSET))(this, chars, count, flush);
		}

		::System::Int32 GetBytes(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTES_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex, flush);
		}

		::System::Int32 GetBytes_1(::System::Char* chars, ::System::Int32 charCount, ::System::Byte* bytes, ::System::Int32 byteCount, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_GETBYTES_1_OFFSET))(this, chars, charCount, bytes, byteCount, flush);
		}

		::System::Void ClearMustFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERNLS_CLEARMUSTFLUSH_OFFSET))(this);
		}
	};
}
