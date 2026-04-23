#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0E7000)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0E7310)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0E7AB0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E6FE0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStream_WriteMethod_TypeDefinitionIndex = 2708;

	class DeflateStream_WriteMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_INVOKE_OFFSET))(this, array, offset, count);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_BEGININVOKE_OFFSET))(this, array, offset, count, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
