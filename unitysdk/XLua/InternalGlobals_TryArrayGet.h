#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }
namespace XLua { class ObjectTranslator; }

#define XLUA_INTERNALGLOBALS_TRYARRAYGET_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1A430)
#define XLUA_INTERNALGLOBALS_TRYARRAYGET_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1A4D0)
#define XLUA_INTERNALGLOBALS_TRYARRAYGET_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1A3F0)
#define XLUA_INTERNALGLOBALS_TRYARRAYGET__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1A300)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals_TryArrayGet_TypeDefinitionIndex = 50467;

	class InternalGlobals_TryArrayGet : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Type* a1, ::System::IntPtr a2, ::XLua::ObjectTranslator* a3, ::System::Object* a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::System::IntPtr a2, ::XLua::ObjectTranslator* a3, ::System::Object* a4, ::System::Int32 a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
