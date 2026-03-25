#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5E040)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5E0B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5DD30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4A090)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE58_TypeDefinitionIndex = 40475;

	class InternalGlobals___GEN_DELEGATE58 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::CakeRaceCellType cellType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58_INVOKE_OFFSET))(this, cellType);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceCellType cellType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58_BEGININVOKE_OFFSET))(this, cellType, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
