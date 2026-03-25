#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }
namespace XLua { class ObjectTranslator; }

#define XLUA_INTERNALGLOBALS_TRYARRAYGET_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF4A7D0)
#define XLUA_INTERNALGLOBALS_TRYARRAYGET_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF4A870)
#define XLUA_INTERNALGLOBALS_TRYARRAYGET_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF4A120)
#define XLUA_INTERNALGLOBALS_TRYARRAYGET__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4A0D0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals_TryArrayGet_TypeDefinitionIndex = 40477;

	class InternalGlobals_TryArrayGet : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Type* type, ::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Object* obj, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET_INVOKE_OFFSET))(this, type, L, translator, obj, index);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* type, ::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Object* obj, ::System::Int32 index, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET_BEGININVOKE_OFFSET))(this, type, L, translator, obj, index, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYGET_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
