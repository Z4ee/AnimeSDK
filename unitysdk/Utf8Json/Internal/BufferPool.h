#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Internal/ArrayPool_1.h"

#define UTF8JSON_INTERNAL_BUFFERPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95A3C0)
#define UTF8JSON_INTERNAL_BUFFERPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F95A350)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int BufferPool_TypeDefinitionIndex = 95155;

	class BufferPool : public ::Utf8Json::Internal::ArrayPool_1<::System::Byte>
	{
	public:
		static ::Utf8Json::Internal::BufferPool** StaticGet_Default()
		{
			return (::Utf8Json::Internal::BufferPool**)Il2CppClass::FromTypeDefinitionIndex(BufferPool_TypeDefinitionIndex)->GetStaticField(0x53320);
		}

		::System::Void _ctor(::System::Int32 bufferLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_BUFFERPOOL__CTOR_OFFSET))(this, bufferLength);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_BUFFERPOOL__CCTOR_OFFSET))();
		}
	};
}
