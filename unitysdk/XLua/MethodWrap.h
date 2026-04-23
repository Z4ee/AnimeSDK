#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_METHODWRAP_CALL_OFFSET UNITYSDK_OFFSET(0x11239AB0)
#define XLUA_METHODWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x11239A50)

namespace XLua
{
	inline static constexpr unsigned int MethodWrap_TypeDefinitionIndex = 46407;

	class MethodWrap : public ::System::Object
	{
	public:
		::System::String* TypeName; // 0x10
		::System::String* methodName; // 0x18
		::System::Collections::Generic::List_1<::XLua::OverloadMethodWrap*>* overloads; // 0x20
		::System::Boolean TriggeredError; // 0x28
		::System::Boolean forceCheck; // 0x29

		::System::Void _ctor(::System::String* methodName, ::System::Collections::Generic::List_1<::XLua::OverloadMethodWrap*>* overloads, ::System::Boolean forceCheck, ::System::Type* declareType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::XLua::OverloadMethodWrap*>*, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAP__CTOR_OFFSET))(this, methodName, overloads, forceCheck, declareType);
		}

		::System::Int32 Call(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_METHODWRAP_CALL_OFFSET))(this, L);
		}
	};
}
