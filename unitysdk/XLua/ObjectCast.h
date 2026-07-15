#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTCAST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BF2640)
#define XLUA_OBJECTCAST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BF26C0)
#define XLUA_OBJECTCAST_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BF2620)
#define XLUA_OBJECTCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x10BF25B0)

namespace XLua
{
	inline static constexpr unsigned int ObjectCast_TypeDefinitionIndex = 47979;

	class ObjectCast : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
