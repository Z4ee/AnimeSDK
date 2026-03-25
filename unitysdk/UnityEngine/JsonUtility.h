#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_JSONUTILITY_FROMJSONINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A8CB60)
#define UNITYENGINE_JSONUTILITY_FROMJSONOVERWRITE_OFFSET UNITYSDK_OFFSET(0x18A8CD50)
#define UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET UNITYSDK_OFFSET(0x18A8CC40)
#define UNITYENGINE_JSONUTILITY_TOJSONINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A8CB50)
#define UNITYENGINE_JSONUTILITY_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x18A8CB80)
#define UNITYENGINE_JSONUTILITY_TOJSON_OFFSET UNITYSDK_OFFSET(0x18A8CB70)

namespace UnityEngine
{
	inline static constexpr unsigned int JsonUtility_TypeDefinitionIndex = 5421;

	class JsonUtility : public ::System::Object
	{
	public:
		static ::System::String* ToJsonInternal(::System::Object* obj, ::System::Boolean prettyPrint)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSONINTERNAL_OFFSET))(obj, prettyPrint);
		}

		static ::System::Object* FromJsonInternal(::System::String* json, ::System::Object* objectToOverwrite, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSONINTERNAL_OFFSET))(json, objectToOverwrite, type);
		}

		static ::System::String* ToJson(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSON_OFFSET))(obj);
		}

		static ::System::String* ToJson_1(::System::Object* obj, ::System::Boolean prettyPrint)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_TOJSON_1_OFFSET))(obj, prettyPrint);
		}

		static ::System::Object* FromJson(::System::String* json, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSON_OFFSET))(json, type);
		}

		static ::System::Void FromJsonOverwrite(::System::String* json, ::System::Object* objectToOverwrite)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_JSONUTILITY_FROMJSONOVERWRITE_OFFSET))(json, objectToOverwrite);
		}
	};
}
