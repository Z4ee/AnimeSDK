#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE62_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11229040)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE62_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112290B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE62_INVOKE_OFFSET UNITYSDK_OFFSET(0x11228D30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE62__CTOR_OFFSET UNITYSDK_OFFSET(0x112132C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE62_TypeDefinitionIndex = 46388;

	class InternalGlobals___GEN_DELEGATE62 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE62__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::CakeRaceCellType cellType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE62_INVOKE_OFFSET))(this, cellType);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceCellType cellType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE62_BEGININVOKE_OFFSET))(this, cellType, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE62_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
