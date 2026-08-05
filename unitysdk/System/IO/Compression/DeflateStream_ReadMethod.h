#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D233670)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D233710)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D2330C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2330A0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStream_ReadMethod_TypeDefinitionIndex = 3244;

	class DeflateStream_ReadMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_INVOKE_OFFSET))(this, array, offset, count);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_BEGININVOKE_OFFSET))(this, array, offset, count, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
