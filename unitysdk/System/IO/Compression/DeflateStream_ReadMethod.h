#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AB37B20)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AB380D0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AB384C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB38440)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStream_ReadMethod_TypeDefinitionIndex = 2718;

	class DeflateStream_ReadMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READMETHOD_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
