#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0E8CF0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0E8D80)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0E8960)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E8310)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStreamNative_UnmanagedReadOrWrite_TypeDefinitionIndex = 2710;

	class DeflateStreamNative_UnmanagedReadOrWrite : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::IntPtr buffer, ::System::Int32 length, ::System::IntPtr data)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE_INVOKE_OFFSET))(this, buffer, length, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr buffer, ::System::Int32 length, ::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE_BEGININVOKE_OFFSET))(this, buffer, length, data, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREADORWRITE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
