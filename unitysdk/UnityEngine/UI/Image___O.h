#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::U2D { class SpriteAtlas; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Image___O_TypeDefinitionIndex = 6728;

	class Image___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>** StaticGet__0___RebuildImage()
		{
			return (::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>**)Il2CppClass::FromTypeDefinitionIndex(Image___O_TypeDefinitionIndex)->GetStaticField(0x20EC0);
		}
	};
}
