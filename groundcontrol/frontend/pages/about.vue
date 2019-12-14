<template>
  <div>
    <h1>about page</h1>
    <test />
  </div>
</template>

<script lang="ts">
import Vue from 'vue'
import Test from '~/components/Test.vue'
export default Vue.extend({
  name: 'About',
  components: {
    Test
  }
})
</script>

<style lang="scss"></style>
