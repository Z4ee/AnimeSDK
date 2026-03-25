#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTCHECK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF788F0)
#define XLUA_OBJECTCHECK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF78960)
#define XLUA_OBJECTCHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF78580)
#define XLUA_OBJECTCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0xFF78560)

namespace XLua
{
	inline static constexpr unsigned int ObjectCheck_TypeDefinitionIndex = 40509;

	class ObjectCheck : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK_INVOKE_OFFSET))(this, L, idx);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::System::Int32 idx, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK_BEGININVOKE_OFFSET))(this, L, idx, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
