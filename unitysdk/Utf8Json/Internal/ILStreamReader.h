#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/BinaryReader.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"

#define UTF8JSON_INTERNAL_ILSTREAMREADER_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E11D670)
#define UTF8JSON_INTERNAL_ILSTREAMREADER_GET_ENDOFSTREAM_OFFSET UNITYSDK_OFFSET(0x1E11D6A0)
#define UTF8JSON_INTERNAL_ILSTREAMREADER_READMETADATATOKEN_OFFSET UNITYSDK_OFFSET(0x1E11DBC0)
#define UTF8JSON_INTERNAL_ILSTREAMREADER_READOPCODE_OFFSET UNITYSDK_OFFSET(0x1E11DA60)
#define UTF8JSON_INTERNAL_ILSTREAMREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11D6D0)
#define UTF8JSON_INTERNAL_ILSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E11D970)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ILStreamReader_TypeDefinitionIndex = 91236;

	class ILStreamReader : public ::System::IO::BinaryReader
	{
	public:
		static ::Il2CppArray<::System::Reflection::Emit::OpCode>** StaticGet_twoByteOpCodes()
		{
			return (::Il2CppArray<::System::Reflection::Emit::OpCode>**)Il2CppClass::FromTypeDefinitionIndex(ILStreamReader_TypeDefinitionIndex)->GetStaticField(0x4F0B0);
		}
		static ::Il2CppArray<::System::Reflection::Emit::OpCode>** StaticGet_oneByteOpCodes()
		{
			return (::Il2CppArray<::System::Reflection::Emit::OpCode>**)Il2CppClass::FromTypeDefinitionIndex(ILStreamReader_TypeDefinitionIndex)->GetStaticField(0x4F0B8);
		}
		::System::Int32 endPosition; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_ILSTREAMREADER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Il2CppArray<::System::Byte>* ilByteArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_ILSTREAMREADER__CTOR_OFFSET))(this, ilByteArray);
		}

		::System::Int32 get_CurrentPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_ILSTREAMREADER_GET_CURRENTPOSITION_OFFSET))(this);
		}

		::System::Boolean get_EndOfStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_ILSTREAMREADER_GET_ENDOFSTREAM_OFFSET))(this);
		}

		::System::Reflection::Emit::OpCode ReadOpCode()
		{
			return ((::System::Reflection::Emit::OpCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_ILSTREAMREADER_READOPCODE_OFFSET))(this);
		}

		::System::Int32 ReadMetadataToken()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_ILSTREAMREADER_READMETADATATOKEN_OFFSET))(this);
		}
	};
}
