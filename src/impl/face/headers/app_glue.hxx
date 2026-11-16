#pragma once

#include <SDL3/SDL.h>
#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>
#include <shaderc/shaderc.hpp>

#ifdef APP_GLUE_IMPLEMENTATION
#include <SDL3/SDL_vulkan.h>
#define VOLK_IMPLEMENTATION
#include <volk.h>
#define VMA_IMPLEMENTATION
#endif
#include "vk_mem_alloc.h"
