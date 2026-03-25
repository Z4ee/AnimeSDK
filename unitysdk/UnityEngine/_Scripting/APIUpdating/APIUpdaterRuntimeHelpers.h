#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETMOVEDFROMATTRIBUTEDATAFORTYPE_OFFSET UNITYSDK_OFFSET(0x18A63C00)
#define UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETOBSOLETETYPEREDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A63D10)

namespace UnityEngine::_Scripting::APIUpdating
{
	inline static constexpr unsigned int APIUpdaterRuntimeHelpers_TypeDefinitionIndex = 4226;

	class APIUpdaterRuntimeHelpers : public ::System::Object
	{
	public:
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
