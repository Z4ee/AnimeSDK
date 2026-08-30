#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTCHECK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11871660)
#define XLUA_OBJECTCHECK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x118716D0)
#define XLUA_OBJECTCHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0x11871650)
#define XLUA_OBJECTCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x118715E0)

namespace XLua
{
	inline static constexpr unsigned int ObjectCheck_TypeDefinitionIndex = 50561;

	class ObjectCheck : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
