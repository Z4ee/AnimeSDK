#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTCAST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1123C750)
#define XLUA_OBJECTCAST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1123C7D0)
#define XLUA_OBJECTCAST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1123C3C0)
#define XLUA_OBJECTCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1123C3A0)

namespace XLua
{
	inline static constexpr unsigned int ObjectCast_TypeDefinitionIndex = 46423;

	class ObjectCast : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST_INVOKE_OFFSET))(this, L, idx, target);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST_BEGININVOKE_OFFSET))(this, L, idx, target, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCAST_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
