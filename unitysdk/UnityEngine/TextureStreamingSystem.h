#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TEXTURESTREAMINGSYSTEM_SETSCREENMAPSTPROPNAMES_OFFSET UNITYSDK_OFFSET(0x1DF5CDD0)
#define UNITYENGINE_TEXTURESTREAMINGSYSTEM_SETSCREENMAPTEXTUREPROPNAMES_OFFSET UNITYSDK_OFFSET(0x1DF5CDC0)
#define UNITYENGINE_TEXTURESTREAMINGSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5CDE0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextureStreamingSystem_TypeDefinitionIndex = 5424;

	class TextureStreamingSystem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURESTREAMINGSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void SetScreenMapTexturePropNames(::Il2CppArray<::System::Int32>* names)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURESTREAMINGSYSTEM_SETSCREENMAPTEXTUREPROPNAMES_OFFSET))(names);
		}

		static ::System::Void SetScreenMapStPropNames(::Il2CppArray<::System::Int32>* names)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURESTREAMINGSYSTEM_SETSCREENMAPSTPROPNAMES_OFFSET))(names);
		}
	};
}
