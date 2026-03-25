#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_15E317187C4E8254;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5CA90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5CB30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5C4A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4A010)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE54_TypeDefinitionIndex = 40471;

	class InternalGlobals___GEN_DELEGATE54 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_INVOKE_OFFSET))(this, entity, property, defaultValue);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 defaultValue, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_BEGININVOKE_OFFSET))(this, entity, property, defaultValue, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
