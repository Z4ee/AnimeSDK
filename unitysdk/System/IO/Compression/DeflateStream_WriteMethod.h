#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19179350)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19179740)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x19179A10)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x19179990)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStream_WriteMethod_TypeDefinitionIndex = 2712;

	class DeflateStream_WriteMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEMETHOD_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
