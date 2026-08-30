#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/MonoChunkStream_State.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_MONOCHUNKSTREAM_GETCHUNKSIZE_OFFSET UNITYSDK_OFFSET(0x1B046B60)
#define SYSTEM_NET_MONOCHUNKSTREAM_GET_CHUNKLEFT_OFFSET UNITYSDK_OFFSET(0x1B047940)
#define SYSTEM_NET_MONOCHUNKSTREAM_GET_DATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B047750)
#define SYSTEM_NET_MONOCHUNKSTREAM_GET_WANTMORE_OFFSET UNITYSDK_OFFSET(0x1B047730)
#define SYSTEM_NET_MONOCHUNKSTREAM_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x1B046A50)
#define SYSTEM_NET_MONOCHUNKSTREAM_READBODY_OFFSET UNITYSDK_OFFSET(0x1B047000)
#define SYSTEM_NET_MONOCHUNKSTREAM_READCRLF_OFFSET UNITYSDK_OFFSET(0x1B047140)
#define SYSTEM_NET_MONOCHUNKSTREAM_READFROMCHUNKS_OFFSET UNITYSDK_OFFSET(0x1B0465D0)
#define SYSTEM_NET_MONOCHUNKSTREAM_READTRAILER_OFFSET UNITYSDK_OFFSET(0x1B0472B0)
#define SYSTEM_NET_MONOCHUNKSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1B0465C0)
#define SYSTEM_NET_MONOCHUNKSTREAM_REMOVECHUNKEXTENSION_OFFSET UNITYSDK_OFFSET(0x1B0479C0)
#define SYSTEM_NET_MONOCHUNKSTREAM_RESETBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0464C0)
#define SYSTEM_NET_MONOCHUNKSTREAM_THROWPROTOCOLVIOLATION_OFFSET UNITYSDK_OFFSET(0x1B047960)
#define SYSTEM_NET_MONOCHUNKSTREAM_WRITEANDREADBACK_OFFSET UNITYSDK_OFFSET(0x1B046560)
#define SYSTEM_NET_MONOCHUNKSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B0464A0)
#define SYSTEM_NET_MONOCHUNKSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0463D0)
#define SYSTEM_NET_MONOCHUNKSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0462D0)

namespace System::Net
{
	inline static constexpr unsigned int MonoChunkStream_TypeDefinitionIndex = 2867;

	class MonoChunkStream : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* chunks; // 0x10
		::System::Text::StringBuilder* saved; // 0x18
		::System::Net::WebHeaderCollection* headers; // 0x20
		::System::Int32 chunkSize; // 0x28
		::System::Int32 totalWritten; // 0x2C
		::System::Net::MonoChunkStream_State state; // 0x30
		::System::Int32 chunkRead; // 0x34
		::System::Boolean gotit; // 0x38
		::System::Boolean sawCR; // 0x39
		::System::Int32 trailerState; // 0x3C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::WebHeaderCollection* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Net::WebHeaderCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void ResetBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_RESETBUFFER_OFFSET))(this);
		}

		::System::Void WriteAndReadBack(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_WRITEANDREADBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ReadFromChunks(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READFROMCHUNKS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InternalWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_INTERNALWRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_WantMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GET_WANTMORE_OFFSET))(this);
		}

		::System::Boolean get_DataAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GET_DATAAVAILABLE_OFFSET))(this);
		}

		::System::Int32 get_ChunkLeft()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GET_CHUNKLEFT_OFFSET))(this);
		}

		::System::Net::MonoChunkStream_State ReadBody(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READBODY_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::MonoChunkStream_State GetChunkSize(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GETCHUNKSIZE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* RemoveChunkExtension(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_REMOVECHUNKEXTENSION_OFFSET))(a1);
		}

		::System::Net::MonoChunkStream_State ReadCRLF(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READCRLF_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::MonoChunkStream_State ReadTrailer(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Net::MonoChunkStream_State(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_READTRAILER_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void ThrowProtocolViolation(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_THROWPROTOCOLVIOLATION_OFFSET))(a1);
		}
	};
}
