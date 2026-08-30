#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_BINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC16770)

namespace System::Reflection
{
	inline static constexpr unsigned int Binder_TypeDefinitionIndex = 556;

	class Binder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_BINDER__CTOR_OFFSET))(this);
		}
	};
}
