#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_JSONUTILITY_FROMJSONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA91D0)
#define UNITYENGINE_JSONUTILITY_FROMJSONOVERWRITE_OFFSET UNITYSDK_OFFSET(0x1EDA94C0)
#define UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1EDA92D0)
#define UNITYENGINE_JSONUTILITY_TOJSONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA91C0)
#define UNITYENGINE_JSONUTILITY_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x1EDA91F0)
#define UNITYENGINE_JSONUTILITY_TOJSON_OFFSET UNITYSDK_OFFSET(0x1EDA91E0)

namespace UnityEngine
{
	inline static constexpr unsigned int JsonUtility_TypeDefinitionIndex = 5789;

	class JsonUtility : public ::System::Object
	{
	public:
		static ::System::String* ToJsonInternal(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSONINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Object* FromJsonInternal(::System::String* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSONINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToJson(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSON_OFFSET))(a1);
		}

		static ::System::String* ToJson_1(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSON_1_OFFSET))(a1, a2);
		}

		static ::System::Object* FromJson(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET))(a1, a2);
		}

		static ::System::Void FromJsonOverwrite(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSONOVERWRITE_OFFSET))(a1, a2);
		}
	};
}
