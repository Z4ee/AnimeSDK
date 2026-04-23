#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }
namespace XLua { class ObjectTranslator; }

#define XLUA_INTERNALGLOBALS_TRYARRAYSET_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11214200)
#define XLUA_INTERNALGLOBALS_TRYARRAYSET_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112142B0)
#define XLUA_INTERNALGLOBALS_TRYARRAYSET_INVOKE_OFFSET UNITYSDK_OFFSET(0x11213AD0)
#define XLUA_INTERNALGLOBALS_TRYARRAYSET__CTOR_OFFSET UNITYSDK_OFFSET(0x11213320)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals_TryArraySet_TypeDefinitionIndex = 46391;

	class InternalGlobals_TryArraySet : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Type* type, ::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Object* obj, ::System::Int32 array_idx, ::System::Int32 obj_idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET_INVOKE_OFFSET))(this, type, L, translator, obj, array_idx, obj_idx);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* type, ::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Object* obj, ::System::Int32 array_idx, ::System::Int32 obj_idx, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET_BEGININVOKE_OFFSET))(this, type, L, translator, obj, array_idx, obj_idx, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
