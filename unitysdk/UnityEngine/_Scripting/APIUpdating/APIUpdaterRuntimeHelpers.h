#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETMOVEDFROMATTRIBUTEDATAFORTYPE_OFFSET UNITYSDK_OFFSET(0x1E8B4540)
#define UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETOBSOLETETYPEREDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E8B4650)
#define UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B4960)

namespace UnityEngine::_Scripting::APIUpdating
{
	inline static constexpr unsigned int APIUpdaterRuntimeHelpers_TypeDefinitionIndex = 5429;

	class APIUpdaterRuntimeHelpers : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean GetMovedFromAttributeDataForType(::System::Type* sourceType, ::System::String*& assembly, ::System::String*& nsp, ::System::String*& klass)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETMOVEDFROMATTRIBUTEDATAFORTYPE_OFFSET))(sourceType, assembly, nsp, klass);
		}

		static ::System::Boolean GetObsoleteTypeRedirection(::System::Type* sourceType, ::System::String*& assemblyName, ::System::String*& nsp, ::System::String*& className)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETOBSOLETETYPEREDIRECTION_OFFSET))(sourceType, assemblyName, nsp, className);
		}
	};
}
