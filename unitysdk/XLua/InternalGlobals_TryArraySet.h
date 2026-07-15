#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }
namespace XLua { class ObjectTranslator; }

#define XLUA_INTERNALGLOBALS_TRYARRAYSET_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE7C30)
#define XLUA_INTERNALGLOBALS_TRYARRAYSET_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE7CE0)
#define XLUA_INTERNALGLOBALS_TRYARRAYSET_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE7BE0)
#define XLUA_INTERNALGLOBALS_TRYARRAYSET__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE7AF0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals_TryArraySet_TypeDefinitionIndex = 47947;

	class InternalGlobals_TryArraySet : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Type* a1, ::System::IntPtr a2, ::XLua::ObjectTranslator* a3, ::System::Object* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::System::IntPtr a2, ::XLua::ObjectTranslator* a3, ::System::Object* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_TRYARRAYSET_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
